
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siphash {int dummy; } ;
struct inode_data {int ino; int dev; } ;


 int FUNC_0 (struct inode_data const*) ;
 int FUNC_1 (int *,int,struct siphash*) ;

__attribute__((used)) static void FUNC_2(const struct inode_data *VAR_0, struct siphash *VAR_1) {
        FUNC_0(VAR_0);

        FUNC_1(&VAR_0->dev, sizeof(VAR_0->dev), VAR_1);
        FUNC_1(&VAR_0->ino, sizeof(VAR_0->ino), VAR_1);
}
