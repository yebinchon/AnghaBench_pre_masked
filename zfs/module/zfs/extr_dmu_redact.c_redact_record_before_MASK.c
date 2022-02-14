
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redact_record {scalar_t__ eos_marker; int datablksz; int end_blkid; int end_object; int start_blkid; int start_object; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static boolean_t
FUNC_1(const struct redact_record *VAR_2,
    const struct redact_record *VAR_3)
{
 if (VAR_2->eos_marker == VAR_1)
  return (VAR_0);
 else if (VAR_3->eos_marker == VAR_1)
  return (VAR_1);
 return (FUNC_0(VAR_2->start_object, VAR_2->start_blkid,
     VAR_2->datablksz, VAR_3->end_object, VAR_3->end_blkid,
     VAR_3->datablksz) <= 0);
}
