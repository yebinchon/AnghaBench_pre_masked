
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_logger_operations {int dummy; } ;
struct vlc_logger {int * ops; } ;
struct vlc_logger_external {struct vlc_logger logger; void* opaque; struct vlc_logger_operations const* ops; } ;


 int VAR_0 ;
 struct vlc_logger_external* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct vlc_logger *
FUNC_2(const struct vlc_logger_operations *VAR_1, void *VAR_2)
{
    struct vlc_logger_external *VAR_3 = FUNC_0(sizeof (*VAR_3));
    if (FUNC_1(VAR_3 == ((void*)0)))
        return ((void*)0);

    VAR_3->logger.ops = &VAR_0;
    VAR_3->ops = VAR_1;
    VAR_3->opaque = VAR_2;
    return &VAR_3->logger;
}
