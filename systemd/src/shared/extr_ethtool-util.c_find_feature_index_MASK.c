
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_gstrings {unsigned int len; int * data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(struct ethtool_gstrings *VAR_2, const char *VAR_3) {
        unsigned VAR_4;

        for (VAR_4 = 0; VAR_4 < VAR_2->len; VAR_4++) {
                if (FUNC_0((char *) &VAR_2->data[VAR_4 * VAR_1], VAR_3))
                        return VAR_4;
        }

        return -VAR_0;
}
