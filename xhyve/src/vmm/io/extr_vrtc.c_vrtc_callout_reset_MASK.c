
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vrtc {int callout; int vm; } ;
typedef int sbintime_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int ,struct vrtc*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct vrtc *VAR_2, sbintime_t VAR_3)
{
 if (VAR_3 == 0) {
  if (FUNC_2(&VAR_2->callout)) {
   FUNC_0(VAR_2->vm, "RTC callout stopped");
   FUNC_4(&VAR_2->callout);
  }
  return;
 }
 FUNC_1(VAR_2->vm, "RTC callout frequency %lld hz", VAR_0 / VAR_3);
 FUNC_3(&VAR_2->callout, VAR_3, 0, VAR_1,
     VAR_2, 0);
}
