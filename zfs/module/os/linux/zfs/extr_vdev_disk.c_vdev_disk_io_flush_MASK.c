
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zio_t ;
struct request_queue {int dummy; } ;
struct block_device {int dummy; } ;
struct bio {int * bi_private; int bi_end_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct request_queue* FUNC_1 (struct block_device*) ;
 struct bio* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct bio*,struct block_device*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct block_device*) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (struct bio*) ;

__attribute__((used)) static int
FUNC_8(struct block_device *VAR_4, zio_t *VAR_5)
{
 struct request_queue *VAR_6;
 struct bio *VAR_7;

 VAR_6 = FUNC_1(VAR_4);
 if (!VAR_6)
  return (FUNC_0(VAR_1));

 VAR_7 = FUNC_2(VAR_2, 0);

 if (FUNC_6(VAR_7 == ((void*)0)))
  return (FUNC_0(VAR_0));

 VAR_7->bi_end_io = VAR_3;
 VAR_7->bi_private = VAR_5;
 FUNC_3(VAR_7, VAR_4);
 FUNC_4(VAR_7);
 FUNC_7(VAR_7);
 FUNC_5(VAR_4);

 return (0);
}
