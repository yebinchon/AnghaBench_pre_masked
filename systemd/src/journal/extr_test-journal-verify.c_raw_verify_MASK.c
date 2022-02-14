
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int JournalFile ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,char const*,int ,int,int,int ,int,int *,int *,int *,int *,int **) ;
 int FUNC_2 (int *,char const*,int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, const char *VAR_2) {
        JournalFile *VAR_3;
        int VAR_4;

        VAR_4 = FUNC_1(-1, VAR_1, VAR_0, 0666, 1, (uint64_t) -1, !!VAR_2, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        VAR_4 = FUNC_2(VAR_3, VAR_2, ((void*)0), ((void*)0), ((void*)0), 0);
        (void) FUNC_0(VAR_3);

        return VAR_4;
}
