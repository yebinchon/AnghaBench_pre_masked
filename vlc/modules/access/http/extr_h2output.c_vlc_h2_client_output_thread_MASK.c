
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_output {int failed; int lock; int tls; } ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ,char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void *FUNC_4(void *VAR_0)
{
    static const char VAR_1[] = "PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n";
    struct vlc_h2_output *VAR_2 = VAR_0;

    if (FUNC_1(VAR_2->tls, VAR_1, 24) < 24)
    {
        FUNC_2(&VAR_2->lock);
        VAR_2->failed = 1;
        FUNC_3(&VAR_2->lock);
        return ((void*)0);
    }

    return FUNC_0(VAR_0);
}
