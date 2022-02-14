
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receive_writer_arg {int byteswap; int os; int max_object; scalar_t__ raw; } ;
struct drr_write_embedded {scalar_t__ drr_psize; scalar_t__ drr_etype; scalar_t__ drr_compression; scalar_t__ drr_offset; int drr_object; int drr_lsize; scalar_t__ drr_length; } ;
typedef int dmu_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__,void*,scalar_t__,scalar_t__,int ,scalar_t__,int,int *) ;
 int FUNC_7 (struct receive_writer_arg*,int ,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_8(struct receive_writer_arg *VAR_6,
    struct drr_write_embedded *VAR_7, void *VAR_8)
{
 dmu_tx_t *VAR_9;
 int VAR_10;

 if (VAR_7->drr_offset + VAR_7->drr_length < VAR_7->drr_offset)
  return (FUNC_0(VAR_1));

 if (VAR_7->drr_psize > VAR_0)
  return (FUNC_0(VAR_1));

 if (VAR_7->drr_etype >= VAR_2)
  return (FUNC_0(VAR_1));
 if (VAR_7->drr_compression >= VAR_5)
  return (FUNC_0(VAR_1));
 if (VAR_6->raw)
  return (FUNC_0(VAR_1));

 if (VAR_7->drr_object > VAR_6->max_object)
  VAR_6->max_object = VAR_7->drr_object;

 VAR_9 = FUNC_4(VAR_6->os);

 FUNC_5(VAR_9, VAR_7->drr_object,
     VAR_7->drr_offset, VAR_7->drr_length);
 VAR_10 = FUNC_2(VAR_9, VAR_3);
 if (VAR_10 != 0) {
  FUNC_1(VAR_9);
  return (VAR_10);
 }

 FUNC_6(VAR_6->os, VAR_7->drr_object,
     VAR_7->drr_offset, VAR_8, VAR_7->drr_etype,
     VAR_7->drr_compression, VAR_7->drr_lsize, VAR_7->drr_psize,
     VAR_6->byteswap ^ VAR_4, VAR_9);


 FUNC_7(VAR_6, VAR_7->drr_object, VAR_7->drr_offset, VAR_9);
 FUNC_3(VAR_9);
 return (0);
}
