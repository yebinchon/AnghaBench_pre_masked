
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reply_callback {scalar_t__ timeout; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1) {
        const struct reply_callback *VAR_2 = VAR_0, *VAR_3 = VAR_1;

        if (VAR_2->timeout != 0 && VAR_3->timeout == 0)
                return -1;

        if (VAR_2->timeout == 0 && VAR_3->timeout != 0)
                return 1;

        return FUNC_0(VAR_2->timeout, VAR_3->timeout);
}
