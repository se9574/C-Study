#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;
int N, M, K;


constexpr int MOD = 1'000'000'007;

template <typename T = int>
class Matrix {
private:
    int rows, cols;
    vector<vector<T>> data;

public:
    Matrix() = default;

    Matrix(int r, int c, const T& init = T())
        : rows(r), cols(c), data(r, vector<T>(c, init)) {
    }

    Matrix(initializer_list<initializer_list<T>> init)
        : rows(init.size()), cols(init.begin()->size()), data(init.begin(), init.end()) {
    }

    vector<T>& operator[](int index) { return data[index]; }
    const vector<T>& operator[](int index) const { return data[index]; }

    static Matrix<T> I(int n) {
        Matrix<T> result(n, n);
        for (int i = 0; i < n; ++i) {
            result[i][i] = 1;
        }
        return result;
    }

    Matrix<T> operator-() const {
        Matrix<T> result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = (-data[i][j] + MOD) % MOD;
            }
        }
        return result;
    }

    Matrix<T> operator+(const Matrix<T>& other) const {
        Matrix<T> result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = (data[i][j] + other[i][j]) % MOD;
            }
        }
        return result;
    }

    Matrix<T> operator-(const Matrix<T>& other) const {
        Matrix<T> result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result[i][j] = (data[i][j] - other[i][j] + MOD) % MOD;
            }
        }
        return result;
    }

    Matrix<T> operator*(const Matrix<T>& other) const {
        Matrix<T> result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < other.rows; ++k) {
                    result[i][j] += data[i][k] * other[k][j];
                }
                result[i][j] %= MOD;
            }
        }
        return result;
    }

    Matrix<T> operator^(int n) const {
        Matrix<T> base = *this;
        Matrix<T> result = I(rows);
        while (n > 0) {
            if (n % 2) result = result * base;
            base = base * base;
            n /= 2;
        }
        return result;
    }

    friend istream& operator<<(istream& in, Matrix& matrix) {
        for (int i = 0; i < matrix.rows; ++i) {
            for (int j = 0; j < matrix.cols; ++j) {
                in >> matrix[i][j];
            }
        }
        return in;
    }

    friend ostream& operator<<(ostream& out, const Matrix& matrix) {
        for (int i = 0; i < matrix.rows; ++i) {
            out << "";
            for (int j = 0; j < matrix.cols; ++j) {
                out << matrix[i][j] << ' ';
            }
            out << "\n";
        }
        return out;
    }
};

int main(void)
{
    cin >> N>> M;
    Matrix<int> A(N, M);
    cin << A;
    cin >> M>> K;
    Matrix<int> B(M, K);
    cin << B;

    cout << A * B;


    return 0;
}