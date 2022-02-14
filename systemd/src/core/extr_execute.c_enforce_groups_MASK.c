
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int const*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(gid_t VAR_1, const gid_t *VAR_2, int VAR_3) {
        int VAR_4;


        if (VAR_3 > 0) {
                VAR_4 = FUNC_1(VAR_3, VAR_2);
                if (VAR_4 < 0)
                        return VAR_4;
        }

        if (FUNC_0(VAR_1)) {

                if (FUNC_2(VAR_1, VAR_1, VAR_1) < 0)
                        return -VAR_0;
        }

        return 0;
}
