
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct paste_buffer {int dummy; } ;
struct format_tree {int dummy; } ;


 int FUNC_0 (struct format_tree*,char*,char*,...) ;
 int FUNC_1 (struct format_tree*,char*,struct timeval*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct paste_buffer*) ;
 int FUNC_4 (struct paste_buffer*,size_t*) ;
 char* FUNC_5 (struct paste_buffer*) ;
 char* FUNC_6 (struct paste_buffer*) ;
 int FUNC_7 (struct timeval*) ;

void
FUNC_8(struct format_tree *VAR_0, struct paste_buffer *VAR_1)
{
 struct timeval VAR_2;
 size_t VAR_3;
 char *VAR_4;

 FUNC_7(&VAR_2);
 VAR_2.tv_sec = FUNC_3(VAR_1);
 FUNC_4(VAR_1, &VAR_3);

 FUNC_0(VAR_0, "buffer_size", "%zu", VAR_3);
 FUNC_0(VAR_0, "buffer_name", "%s", FUNC_5(VAR_1));
 FUNC_1(VAR_0, "buffer_created", &VAR_2);

 VAR_4 = FUNC_6(VAR_1);
 FUNC_0(VAR_0, "buffer_sample", "%s", VAR_4);
 FUNC_2(VAR_4);
}
