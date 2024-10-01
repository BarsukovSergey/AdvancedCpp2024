int main() {
    int a = 1;
    (true ? ++a : a++) = 1;
    return 0;
}
