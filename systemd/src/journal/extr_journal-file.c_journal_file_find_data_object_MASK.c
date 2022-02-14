
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int Object ;
typedef int JournalFile ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void const*,int ) ;
 int FUNC_2 (int *,void const*,int ,int ,int **,int *) ;

int FUNC_3(
                JournalFile *VAR_0,
                const void *VAR_1, uint64_t VAR_2,
                Object **VAR_3, uint64_t *VAR_4) {

        uint64_t VAR_5;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1 || VAR_2 == 0);

        VAR_5 = FUNC_1(VAR_1, VAR_2);

        return FUNC_2(VAR_0,
                                                       VAR_1, VAR_2, VAR_5,
                                                       VAR_3, VAR_4);
}
