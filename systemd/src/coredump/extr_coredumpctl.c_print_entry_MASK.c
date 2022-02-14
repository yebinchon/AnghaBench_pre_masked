
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *,unsigned int) ;
 int FUNC_3 (int ,int *,unsigned int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(sd_journal *VAR_2, unsigned VAR_3, bool VAR_4) {
        FUNC_0(VAR_2);

        if (VAR_4)
                return FUNC_2(VAR_1, VAR_2, VAR_3);
        else if (VAR_0)
                return FUNC_1(VAR_1, VAR_2);
        else
                return FUNC_3(VAR_1, VAR_2, VAR_3);
}
