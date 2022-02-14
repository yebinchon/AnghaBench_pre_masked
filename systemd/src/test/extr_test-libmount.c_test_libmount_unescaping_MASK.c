
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,char*,char*) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0(
                        "escaped space + utf8",
                        "729 38 0:59 / /tmp/„zupa\\040zębowa” rw,relatime shared:395 - tmpfs die\\040Brühe rw,seclabel",
                        0,
                        "die Brühe",
                        "/tmp/„zupa zębowa”"
        );

        FUNC_0(
                        "escaped newline",
                        "729 38 0:59 / /tmp/x\\012y rw,relatime shared:395 - tmpfs newline rw,seclabel",
                        0,
                        "newline",
                        "/tmp/x\ny"
        );





        FUNC_0(
                        "empty source",
                        "760 38 0:60 / /tmp/emptysource rw,relatime shared:410 - tmpfs  rw,seclabel",
                        1,
                        "",
                        "/tmp/emptysource"
        );




        FUNC_0(
                        "foo\\rbar",
                        "790 38 0:61 / /tmp/foo\rbar rw,relatime shared:425 - tmpfs tmpfs rw,seclabel",
                        1,
                        "tmpfs",
                        "/tmp/foo\rbar"
        );
}
