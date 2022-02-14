
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sd_journal *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_3(VAR_1);
        if (VAR_2 == 0)
                VAR_2 = FUNC_2(VAR_1);
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to search journal: %m");
        if (VAR_2 == 0)
                return FUNC_1(FUNC_0(VAR_0),
                                       "No match found.");
        return VAR_2;
}
