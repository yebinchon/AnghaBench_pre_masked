
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int,int ,int) ;
 int FUNC_3 (int,int,char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(int VAR_9, int VAR_10, bool VAR_11, const char *VAR_12)
{
    int VAR_13 = VAR_6;
    if (VAR_13 <= 3 || VAR_10 <= 0)
        return;

    if (VAR_11) FUNC_0(VAR_7, ((void*)0));

    if (!VAR_12) VAR_12 = "";
    int VAR_14 = FUNC_4(VAR_12);

    if (VAR_14 > VAR_13 - 2)
        VAR_14 = VAR_13 - 2;

    FUNC_1(VAR_9, 0, VAR_3);
    FUNC_2(VAR_9, 1, VAR_0, (VAR_13-VAR_14-2)/2);
    FUNC_3(VAR_9, 1+(VAR_13-VAR_14-2)/2, "%s", VAR_12);
    FUNC_2(VAR_9, (VAR_13-VAR_14)/2+VAR_14, VAR_0, VAR_13 - 1 - ((VAR_13-VAR_14)/2+VAR_14));
    FUNC_1(VAR_9, VAR_13-1,VAR_4);

    for (int VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
        FUNC_1(++VAR_9, 0, VAR_5);
        FUNC_1(VAR_9, VAR_13-1, VAR_5);
    }

    FUNC_1(++VAR_9, 0, VAR_1);
    FUNC_2(VAR_9, 1, VAR_0, VAR_13 - 2);
    FUNC_1(VAR_9, VAR_13-1, VAR_2);
    if (VAR_11) FUNC_0(VAR_8, ((void*)0));
}
