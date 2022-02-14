
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct workspace {int mem_size; int mem; int window_size; } ;
struct squashfs_sb_info {scalar_t__ devblksize; } ;
struct squashfs_page_actor {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ pos; int * dst; int member_2; int member_1; int * member_0; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {scalar_t__ pos; scalar_t__ size; scalar_t__ src; int member_2; int member_1; int * member_0; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZSTD_DStream ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 void* VAR_1 ;
 size_t FUNC_1 (int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (size_t) ;
 int * FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct squashfs_page_actor*) ;
 int * FUNC_8 (struct squashfs_page_actor*) ;
 int * FUNC_9 (struct squashfs_page_actor*) ;

__attribute__((used)) static int FUNC_10(struct squashfs_sb_info *VAR_2, void *VAR_3,
 struct buffer_head **VAR_4, int VAR_5, int VAR_6, int VAR_7,
 struct squashfs_page_actor *VAR_8)
{
 struct workspace *VAR_9 = VAR_3;
 ZSTD_DStream *VAR_10;
 size_t VAR_11 = 0;
 size_t VAR_12;
 int VAR_13 = 0;
 ZSTD_inBuffer VAR_14 = { ((void*)0), 0, 0 };
 ZSTD_outBuffer VAR_15 = { ((void*)0), 0, 0 };

 VAR_10 = FUNC_3(VAR_9->window_size, VAR_9->mem, VAR_9->mem_size);

 if (!VAR_10) {
  FUNC_0("Failed to initialize zstd decompressor\n");
  goto out;
 }

 VAR_15.size = VAR_1;
 VAR_15.dst = FUNC_8(VAR_8);

 do {
  if (VAR_14.pos == VAR_14.size && VAR_13 < VAR_5) {
   int VAR_16 = FUNC_5(VAR_7, VAR_2->devblksize - VAR_6);

   VAR_7 -= VAR_16;
   VAR_14.src = VAR_4[VAR_13]->b_data + VAR_6;
   VAR_14.size = VAR_16;
   VAR_14.pos = 0;
   VAR_6 = 0;
  }

  if (VAR_15.pos == VAR_15.size) {
   VAR_15.dst = FUNC_9(VAR_8);
   if (VAR_15.dst == ((void*)0)) {



    FUNC_7(VAR_8);
    goto out;
   }
   VAR_15.pos = 0;
   VAR_15.size = VAR_1;
  }

  VAR_11 -= VAR_15.pos;
  VAR_12 = FUNC_1(VAR_10, &VAR_15, &VAR_14);
  VAR_11 += VAR_15.pos;

  if (VAR_14.pos == VAR_14.size && VAR_13 < VAR_5)
   FUNC_6(VAR_4[VAR_13++]);
 } while (VAR_12 != 0 && !FUNC_4(VAR_12));

 FUNC_7(VAR_8);

 if (FUNC_4(VAR_12)) {
  FUNC_0("zstd decompression error: %d\n",
    (int)FUNC_2(VAR_12));
  goto out;
 }

 if (VAR_13 < VAR_5)
  goto out;

 return (int)VAR_11;

out:
 for (; VAR_13 < VAR_5; VAR_13++)
  FUNC_6(VAR_4[VAR_13]);

 return -VAR_0;
}
