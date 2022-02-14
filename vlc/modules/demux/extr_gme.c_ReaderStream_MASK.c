
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;
typedef char* gme_err_t ;


 int FUNC_0 (int *,void*,int) ;

__attribute__((used)) static gme_err_t FUNC_1 (void *VAR_0, void *VAR_1, int VAR_2)
{
    stream_t *VAR_3 = VAR_0;

    if (FUNC_0 (VAR_3, VAR_1, VAR_2) < VAR_2)
        return "short read";
    return ((void*)0);
}
