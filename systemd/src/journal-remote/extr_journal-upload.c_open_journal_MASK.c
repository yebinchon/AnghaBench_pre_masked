
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;


 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int **,scalar_t__) ;
 int FUNC_2 (int **,scalar_t__,int ) ;
 int FUNC_3 (int **,char*,scalar_t__) ;
 int FUNC_4 (int **,char const**,int ) ;

__attribute__((used)) static int FUNC_5(sd_journal **VAR_6) {
        int VAR_7;

        if (VAR_1)
                VAR_7 = FUNC_3(VAR_6, VAR_1, VAR_3);
        else if (VAR_2)
                VAR_7 = FUNC_4(VAR_6, (const char**) VAR_2, 0);
        else if (VAR_4)
                VAR_7 = FUNC_2(VAR_6, VAR_4, 0);
        else
                VAR_7 = FUNC_1(VAR_6, !VAR_5*VAR_0 + VAR_3);
        if (VAR_7 < 0)
                FUNC_0(VAR_7, "Failed to open %s: %m",
                                VAR_1 ? VAR_1 : VAR_2 ? "files" : "journal");
        return VAR_7;
}
