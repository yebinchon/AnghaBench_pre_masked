
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_4, size_t VAR_5) {
        unsigned long VAR_6, VAR_7;

        VAR_6 = (unsigned long) VAR_4;
        VAR_7 = VAR_6 + VAR_5;

        if (FUNC_0(VAR_0, VAR_2, VAR_6, 0, 0) < 0)
                return -VAR_3;

        if (FUNC_0(VAR_0, VAR_1, VAR_7, 0, 0) < 0)
                return -VAR_3;

        return 0;
}
