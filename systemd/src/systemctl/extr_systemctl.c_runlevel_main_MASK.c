
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char,char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int*,int*) ;

__attribute__((used)) static int FUNC_3(void) {
        int VAR_0, VAR_1, VAR_2;

        VAR_0 = FUNC_2(&VAR_1, &VAR_2);
        if (VAR_0 < 0) {
                FUNC_1("unknown");
                return VAR_0;
        }

        FUNC_0("%c %c\n",
               VAR_2 <= 0 ? 'N' : VAR_2,
               VAR_1 <= 0 ? 'N' : VAR_1);

        return 0;
}
