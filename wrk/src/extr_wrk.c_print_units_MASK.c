__attribute__((used)) static void FUNC_0(long double VAR_0, char *(*VAR_1)(long double), int VAR_2) {
    char *VAR_3 = VAR_1(VAR_0);
    int VAR_4 = strlen(VAR_3), VAR_5 = 2;

    if (isalpha(VAR_3[VAR_4-1])) VAR_5--;
    if (FUNC_0(VAR_3[VAR_4-2])) VAR_5--;
    VAR_2 -= VAR_5;

    printf("%*.*s%.*s", VAR_2, VAR_2, VAR_3, VAR_5, "  ");

    FUNC_0(VAR_3);
}
