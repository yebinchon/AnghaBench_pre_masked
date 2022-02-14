
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MonitorNetlinkGroup ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static MonitorNetlinkGroup FUNC_1(const char *VAR_4) {
        if (!VAR_4)
                return VAR_1;
        if (FUNC_0(VAR_4, "udev"))
                return VAR_2;
        if (FUNC_0(VAR_4, "kernel"))
                return VAR_0;
        return VAR_3;
}
