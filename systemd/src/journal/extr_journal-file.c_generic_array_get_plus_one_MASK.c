
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int Object ;
typedef int JournalFile ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__,int **,scalar_t__*) ;
 int FUNC_2 (int *,int ,scalar_t__,int **) ;

__attribute__((used)) static int FUNC_3(
                JournalFile *VAR_1,
                uint64_t VAR_2,
                uint64_t VAR_3,
                uint64_t VAR_4,
                Object **VAR_5, uint64_t *VAR_6) {

        Object *VAR_7;

        FUNC_0(VAR_1);

        if (VAR_4 == 0) {
                int VAR_8;

                VAR_8 = FUNC_2(VAR_1, VAR_0, VAR_2, &VAR_7);
                if (VAR_8 < 0)
                        return VAR_8;

                if (VAR_5)
                        *VAR_5 = VAR_7;

                if (VAR_6)
                        *VAR_6 = VAR_2;

                return 1;
        }

        return FUNC_1(VAR_1, VAR_3, VAR_4-1, VAR_5, VAR_6);
}
