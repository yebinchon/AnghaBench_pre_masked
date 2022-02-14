
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ExecCommandFlags ;


 size_t FUNC_0 (char const**) ;
 char const** VAR_0 ;

const char* FUNC_1(ExecCommandFlags VAR_1) {
        size_t VAR_2;

        for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
                if (VAR_1 == (1 << VAR_2))
                        return VAR_0[VAR_2];

        return ((void*)0);
}
