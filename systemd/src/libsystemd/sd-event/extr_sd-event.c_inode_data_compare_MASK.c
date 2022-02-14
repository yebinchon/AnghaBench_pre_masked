
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_data {int ino; int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct inode_data const*) ;

__attribute__((used)) static int FUNC_2(const struct inode_data *VAR_0, const struct inode_data *VAR_1) {
        int VAR_2;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);

        VAR_2 = FUNC_0(VAR_0->dev, VAR_1->dev);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_0(VAR_0->ino, VAR_1->ino);
}
