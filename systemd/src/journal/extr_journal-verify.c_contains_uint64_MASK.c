
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int MMapFileDescriptor ;
typedef int MMapCache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int,int ,int,int,int,int *,void**,int *) ;

__attribute__((used)) static int FUNC_2(MMapCache *VAR_2, MMapFileDescriptor *VAR_3, uint64_t VAR_4, uint64_t VAR_5) {
        uint64_t VAR_6, VAR_7;
        int VAR_8;

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);



        VAR_6 = 0; VAR_7 = VAR_4;
        while (VAR_6 < VAR_7) {
                uint64_t VAR_9, *VAR_10;

                VAR_9 = (VAR_6 + VAR_7) / 2;

                VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_0|VAR_1, 0, 0, VAR_9 * sizeof(uint64_t), sizeof(uint64_t), ((void*)0), (void **) &VAR_10, ((void*)0));
                if (VAR_8 < 0)
                        return VAR_8;

                if (*VAR_10 == VAR_5)
                        return 1;

                if (VAR_6 + 1 >= VAR_7)
                        return 0;

                if (VAR_5 < *VAR_10)
                        VAR_7 = VAR_9;
                else
                        VAR_6 = VAR_9;
        }

        return 0;
}
