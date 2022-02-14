
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* tty_path; scalar_t__ stdio_as_fds; } ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static const char *FUNC_1(const ExecContext *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->stdio_as_fds)
                return ((void*)0);

        if (VAR_0->tty_path)
                return VAR_0->tty_path;

        return "/dev/console";
}
