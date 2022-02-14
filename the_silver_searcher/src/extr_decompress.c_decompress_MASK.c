
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ag_compression_type ;







 void* FUNC_0 (void const*,int const,char const*,int*) ;
 void* FUNC_1 (void const*,int const,char const*,int*) ;
 void* FUNC_2 (void const*,int const,char const*,int*) ;
 void* FUNC_3 (void const*,int const,char const*,int*) ;
 int FUNC_4 (char*,...) ;

void *FUNC_5(const ag_compression_type VAR_0, const void *VAR_1, const int VAR_2,
                 const char *VAR_3, int *VAR_4) {
    switch (VAR_0) {




        case 132:
            return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
        case 128:
            return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);




        case 130:
            FUNC_4("File %s is not compressed", VAR_3);
            break;
        default:
            FUNC_4("Unsupported compression type: %d", VAR_0);
    }

    *VAR_4 = 0;
    return ((void*)0);
}
