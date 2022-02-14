
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redact_record {scalar_t__ end_object; scalar_t__ start_object; scalar_t__ end_blkid; scalar_t__ start_blkid; scalar_t__ eos_marker; } ;
typedef int bqueue_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct redact_record*,int) ;
 int FUNC_1 (int *,struct redact_record*,int) ;
 int FUNC_2 (struct redact_record*,int) ;

__attribute__((used)) static void
FUNC_3(bqueue_t *VAR_1, struct redact_record **VAR_2,
    struct redact_record *VAR_3)
{
 if (VAR_3->eos_marker) {
  if (*VAR_2 != ((void*)0))
   FUNC_0(VAR_1, *VAR_2, sizeof (*VAR_2));
  FUNC_1(VAR_1, VAR_3, sizeof (*VAR_3));
  return;
 }
 if (*VAR_2 == ((void*)0)) {
  *VAR_2 = VAR_3;
  return;
 }
 struct redact_record *VAR_4 = *VAR_2;
 if ((VAR_4->end_object == VAR_3->start_object &&
     VAR_4->end_blkid + 1 == VAR_3->start_blkid &&
     VAR_4->end_blkid != VAR_0) ||
     (VAR_4->end_object + 1 == VAR_3->start_object &&
     VAR_4->end_blkid == VAR_0 && VAR_3->start_blkid == 0)) {
  VAR_4->end_object = VAR_3->end_object;
  VAR_4->end_blkid = VAR_3->end_blkid;
  FUNC_2(VAR_3, sizeof (*VAR_3));
 } else {
  FUNC_0(VAR_1, VAR_4, sizeof (*VAR_4));
  *VAR_2 = VAR_3;
 }
}
