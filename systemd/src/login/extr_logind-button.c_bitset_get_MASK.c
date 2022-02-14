
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const unsigned long *VAR_1, unsigned VAR_2) {
        return (VAR_1[VAR_2 / VAR_0] >> (VAR_2 % VAR_0)) & 1UL;
}
