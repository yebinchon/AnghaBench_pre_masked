
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ gcry_error_t ;
struct TYPE_3__ {int hmac; int seal; } ;
typedef TYPE_1__ JournalFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;

int FUNC_2(JournalFile *VAR_3) {
        gcry_error_t VAR_4;

        if (!VAR_3->seal)
                return 0;

        FUNC_1(1);

        VAR_4 = FUNC_0(&VAR_3->hmac, VAR_2, VAR_1);
        if (VAR_4 != 0)
                return -VAR_0;

        return 0;
}
