
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct render_context {void (* ReportSize ) (void*,unsigned int,unsigned int) ;void* ReportOpaque; unsigned int width; unsigned int height; int sizeLock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void FUNC_2 (void*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_3( void *VAR_0,
                       void (*VAR_1)(void *VAR_2, unsigned VAR_3, unsigned VAR_4),
                       void *VAR_5 )
{
    struct render_context *VAR_6 = VAR_0;
    FUNC_0(&VAR_6->sizeLock);
    VAR_6->ReportSize = VAR_1;
    VAR_6->ReportOpaque = VAR_5;

    if (VAR_6->ReportSize != ((void*)0))
    {

        VAR_6->ReportSize(VAR_6->ReportOpaque, VAR_6->width, VAR_6->height);
    }
    FUNC_1(&VAR_6->sizeLock);
}
