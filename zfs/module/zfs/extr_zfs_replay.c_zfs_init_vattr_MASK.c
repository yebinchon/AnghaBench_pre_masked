
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int va_mode; int va_uid; int va_gid; int va_rdev; int va_nodeid; int va_type; scalar_t__ va_mask; } ;
typedef TYPE_1__ vattr_t ;
typedef scalar_t__ uint_t ;
typedef int uint64_t ;
typedef scalar_t__ uid_t ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(vattr_t *VAR_0, uint64_t VAR_1, uint64_t VAR_2,
    uint64_t VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 FUNC_2(VAR_0, sizeof (*VAR_0));
 VAR_0->va_mask = (uint_t)VAR_1;
 VAR_0->va_type = FUNC_0(VAR_2);
 VAR_0->va_mode = VAR_2;
 VAR_0->va_uid = (uid_t)(FUNC_1(VAR_3)) ? -1 : VAR_3;
 VAR_0->va_gid = (gid_t)(FUNC_1(VAR_4)) ? -1 : VAR_4;
 VAR_0->va_rdev = VAR_5;
 VAR_0->va_nodeid = VAR_6;
}
