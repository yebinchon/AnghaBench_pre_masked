
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redact_record {int datablksz; int end_blkid; int end_object; scalar_t__ eos_marker; } ;
struct redact_node {scalar_t__ thread_num; struct redact_record* record; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const struct redact_node *VAR_2 = VAR_0;
 const struct redact_node *VAR_3 = VAR_1;
 const struct redact_record *VAR_4 = VAR_2->record;
 const struct redact_record *VAR_5 = VAR_3->record;
 if (VAR_4->eos_marker)
  return (1);
 if (VAR_5->eos_marker)
  return (-1);

 int VAR_6 = FUNC_0(VAR_4->end_object, VAR_4->end_blkid,
     VAR_4->datablksz, VAR_5->end_object, VAR_5->end_blkid,
     VAR_5->datablksz);
 if (VAR_6 == 0)
  VAR_6 = (VAR_2->thread_num < VAR_3->thread_num ? -1 : 1);
 return (VAR_6);
}
