
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct rist_flow {scalar_t__ ri; scalar_t__ wi; } ;



__attribute__((used)) static int FUNC_0(struct rist_flow *VAR_0, uint16_t VAR_1)
{
    if (VAR_0->ri <= VAR_0->wi) {
        return ((VAR_1 > VAR_0->ri) && (VAR_1 <= VAR_0->wi));
    } else {
        return ((VAR_1 > VAR_0->ri) || (VAR_1 <= VAR_0->wi));
    }
}
