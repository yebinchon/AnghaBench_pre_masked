
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; ; VAR_3++) {
  FUNC_0(VAR_0, "%03x:", VAR_3);

  for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
   if (VAR_3 * 16 + VAR_4 >= VAR_2) {
    FUNC_0(VAR_0, "\n");
    goto out;
   }

   FUNC_0(VAR_0, " %02x", (unsigned char)VAR_1[VAR_3 * 16 + VAR_4]);
  }
  FUNC_0(VAR_0, "\n");
 }
out:
 return (0);
}
