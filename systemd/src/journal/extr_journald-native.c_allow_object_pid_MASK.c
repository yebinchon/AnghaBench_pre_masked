
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ uid; } ;



__attribute__((used)) static bool FUNC_0(const struct ucred *VAR_0) {
        return VAR_0 && VAR_0->uid == 0;
}
