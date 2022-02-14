
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct vm_guest_paging {int dummy; } ;
struct user_segment_descriptor {int dummy; } ;
struct iovec {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iovec*) ;
 int FUNC_5 (int,struct vm_guest_paging*,scalar_t__,int,int ,struct iovec*,int ,int*) ;
 int FUNC_6 (struct iovec*,struct user_segment_descriptor*,int) ;
 int FUNC_7 (struct user_segment_descriptor*,struct iovec*,int) ;
 int FUNC_8 (int,int,scalar_t__*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_9(int VAR_4, struct vm_guest_paging *VAR_5,
    uint16_t VAR_6, struct user_segment_descriptor *VAR_7, bool VAR_8,
    int *VAR_9)
{
 struct iovec VAR_10[2];
 uint64_t VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_15 = FUNC_0(VAR_6) ? VAR_1 : VAR_0;
 VAR_14 = FUNC_8(VAR_4, VAR_15, &VAR_11, &VAR_12, &VAR_13);
 FUNC_3(VAR_14 == 0);
 FUNC_3(VAR_12 >= FUNC_1(VAR_6));

 VAR_14 = FUNC_5(VAR_4, VAR_5, VAR_11 + FUNC_2(VAR_6),
     sizeof(*VAR_7), VAR_8 ? VAR_2 : VAR_3, VAR_10, FUNC_4(VAR_10),
     VAR_9);
 if (VAR_14 || *VAR_9)
  return (VAR_14);

 if (VAR_8)
  FUNC_6(VAR_10, VAR_7, sizeof(*VAR_7));
 else
  FUNC_7(VAR_7, VAR_10, sizeof(*VAR_7));
 return (0);
}
