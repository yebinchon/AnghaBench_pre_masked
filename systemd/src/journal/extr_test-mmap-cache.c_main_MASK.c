
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int MMapFileDescriptor ;
typedef int MMapCache ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int ,int,int,unsigned long long,int,int *,void**,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;

int FUNC_9(int VAR_1, char *VAR_2[]) {
        MMapFileDescriptor *VAR_3;
        int VAR_4, VAR_5, VAR_6, VAR_7;
        char VAR_8[] = "/tmp/testmmapXXXXXXX", VAR_9[] = "/tmp/testmmapYXXXXXX", VAR_10[] = "/tmp/testmmapZXXXXXX";
        MMapCache *VAR_11;
        void *VAR_12, *VAR_13;

        FUNC_0(*(VAR_11 = FUNC_5()));

        VAR_4 = FUNC_1(VAR_8);
        FUNC_0(VAR_4 >= 0);
        FUNC_8(VAR_8);

        FUNC_0(*(VAR_3 = FUNC_2(VAR_11, VAR_4)));

        VAR_5 = FUNC_1(VAR_9);
        FUNC_0(VAR_5 >= 0);
        FUNC_8(VAR_9);

        VAR_6 = FUNC_1(VAR_10);
        FUNC_0(VAR_6 >= 0);
        FUNC_8(VAR_10);

        VAR_7 = FUNC_4(VAR_11, VAR_3, VAR_0, 0, 0, 1, 2, ((void*)0), &VAR_12, ((void*)0));
        FUNC_0(VAR_7 >= 0);

        VAR_7 = FUNC_4(VAR_11, VAR_3, VAR_0, 0, 0, 2, 2, ((void*)0), &VAR_13, ((void*)0));
        FUNC_0(VAR_7 >= 0);

        FUNC_0((uint8_t*) VAR_12 + 1 == (uint8_t*) VAR_13);

        VAR_7 = FUNC_4(VAR_11, VAR_3, VAR_0, 1, 0, 3, 2, ((void*)0), &VAR_13, ((void*)0));
        FUNC_0(VAR_7 >= 0);

        FUNC_0((uint8_t*) VAR_12 + 2 == (uint8_t*) VAR_13);

        VAR_7 = FUNC_4(VAR_11, VAR_3, VAR_0, 0, 0, 16ULL*1024ULL*1024ULL, 2, ((void*)0), &VAR_12, ((void*)0));
        FUNC_0(VAR_7 >= 0);

        VAR_7 = FUNC_4(VAR_11, VAR_3, VAR_0, 1, 0, 16ULL*1024ULL*1024ULL+1, 2, ((void*)0), &VAR_13, ((void*)0));
        FUNC_0(VAR_7 >= 0);

        FUNC_0((uint8_t*) VAR_12 + 1 == (uint8_t*) VAR_13);

        FUNC_3(VAR_11, VAR_3);
        FUNC_6(VAR_11);

        FUNC_7(VAR_4);
        FUNC_7(VAR_5);
        FUNC_7(VAR_6);

        return 0;
}
