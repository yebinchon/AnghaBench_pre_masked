
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union in_addr_union {int in; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int *) ;
 int FUNC_1 (int,char const**,union in_addr_union*) ;
 int FUNC_2 (char const*,unsigned char*) ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static int FUNC_5(int VAR_2, const char **VAR_3, unsigned char *VAR_4) {
        union in_addr_union VAR_5;
        const char *VAR_6, *VAR_7;
        int VAR_8;

        VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_5);
        if (VAR_8 > 0) {
                if (VAR_2 == VAR_0)

                        return -VAR_1;

                *VAR_4 = FUNC_0(&VAR_5.in);
        } else if (VAR_8 == 0)
                *VAR_4 = VAR_2 == VAR_0 ? 128 : 32;
        else {
                VAR_6 = FUNC_3(*VAR_3, ':');
                if (!VAR_6)
                        return -VAR_1;

                VAR_7 = FUNC_4(*VAR_3, VAR_6 - *VAR_3);
                VAR_8 = FUNC_2(VAR_7, VAR_4);
                if (VAR_8 < 0)
                        return VAR_8;

                *VAR_3 = VAR_6 + 1;
        }

        return 0;
}
