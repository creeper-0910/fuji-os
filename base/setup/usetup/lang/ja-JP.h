#pragma once

static MUI_ENTRY jaJPSetupInitPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        0,
        20,
        "SeasideOS ��ı��� � ���� � ���޲� � �ݼ��",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        21,
        "� ��� ��޻�...",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "��� ��޻�...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPLanguagePageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "��ݺ�� ����",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
        "\x07  �ݽİټ�� �ֳ�� ��ݺަ ���� �� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        11,
        "   ·�Ƥ ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "\x07  ���� ���� �� ��ݺ�� �����÷� ����� �ò� ��ݺ�� ��ò��Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��  F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPWelcomePageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "SeasideOS ��ı���� ֳ��",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        6,
        11,
        "�� ��ı���� ��ݶ���� SeasideOS ���ڰèݸ޼��Ѧ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "���߭��� ��߰�� ��ı���� ·�� ��ݶ��� �ޭ��ަ �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        15,
        "\x07  SeasideOS � �ݽİ� / ���߸�ڰ�� �� �� ENTER � ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        17,
        "\x07  SeasideOS � ���̸ Ӽ�� ���� ���� R ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "\x07  SeasideOS � ײ�ݽ�ޮ��ݦ ˮ��� ���� L ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "\x07  SeasideOS � �ݽİ� ���� ������ �ޱ�� F3 ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        23,
        "SeasideOS � ������ �ޮ�γ� �ݼ�� ��� ���� ��޻�:",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        24,
        "http://www.reactos.org",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��  R = ���̸  L = ײ�ݽ  F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPIntroPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "SeasideOS � �ް�ޮ� �ޮ���",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        6,
        11,
        "SeasideOS � ��̧ ��ݶ� � �ؤ �ɳ �� жݾ� ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "���� ��� �޽� ���ޯ� ˮ�� ��� ý� Ӹ÷ �� �� �ֳ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        13,
        "�� �� � ���� �Ͻ� ���ޮ� ÷ � �ֳ �� ���� �޷Ͼݡ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        15,
        "�ޯ�� � ʰ�޳�� �� �ҽ �ޱ� � �ް� � �ޯ����� �� �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        16,
        "��� � �߿�� �� �ֳ �� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "\x07  ENTER � ��� �ޯ�� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "\x07  F3 � �� � SeasideOS � �ݽİ� ���� ���خ� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ���خ�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPLicensePageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        6,
        "�ֳ ���޸:",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        8,
        8,
        "�� SeasideOS ����� �бܾ �ɳ� ײ�ݽ(X11 ԤBSD ����",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        9,
        "GNU LGPL ײ�ݽ ���)� ���ަ ̸� �߰�� ��� GNU GPL �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
        "�ޮ���� ��� ײ�ݽ ��òϽ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        11,
        "SeasideOS ����� ����� ��ĳ��� ����� SeasideOS ����� ������",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        12,
        "��մ� GNU GPL �޹��Ÿ� �� ��ĳ��� �ؼ��� ײ�ݽ� ����",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "�ذ� ��� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        15,
        "�� ��ĳ��� '�μ��'�� ó��� �ڤ ���γ� ����γ�� ÷�����",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        16,
        "�ޱ�� ɿ޲ä �ֳ ����ݦ ��Ͻ� SeasideOS � ײ�ݽ �����",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        17,
        "�޲�ݼ��� ���޲� ̾�� �޹�޽�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        18,
        "GNU General Public License � SeasideOS � ��� ����Ŷ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "�ޱ�ʤ ·ަ �޻ݼ�� ��޻�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        20,
        "http://www.gnu.org/licenses/licenses.html",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        8,
        22,
        "�ݼ� μ��:",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        8,
        24,
        "��� �ذ ��ĳ���޽� ������ ���� ��߰�ޮ��ݦ ���� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        25,
        "μ��� ϯ�� '��Ͼ�'� '��ޮ���' � '÷�޳��'",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        26,
        "Ƶ��� �޳ֳ�޽�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDevicePageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "��� ؽ�� ��ݻ޲� ���޲� ��ò�޽�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        24,
        11,
        "���߭��:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        24,
        12,
        "�ި���ڲ:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        24,
        13,
        "���ް��:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        24,
        14,
        "���ް�� ڲ���:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        24,
        16,
        "�ޭ�޸:",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_RIGHT,
        TEXT_ID_STATIC
    },
    {
        25,
        16, "���� ���޲�� ��ò� �ޭ�޸ ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        19,
        "UP Ӽ�� DOWN ��� ��� ���ذ� ���� �� �����",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        20,
        "ʰ�޳��� ��ò� �ݺ� �޷Ͻ� ���� ��פ ENTER ��� ��� ÷��� ��ò�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        21,
        "���� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        23,
        "���� ��ò�� ���� ��޼� �ޱ�ʤ \"���� ���޲�� ��ò� �ޭ�޸ ��\" � ���� �ä",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        24,
        "ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPRepairPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "SeasideOS ��ı���� ������� ��ݶ�� ��Ͻ� ���Ҥ ���",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        9,
        "�ޭ����� �ֳ �޷� ��ı��� ���ع����� ����� �ɳ� ��߰� ��Ͼݡ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "���̸�ɳ� ��� �ޯ�� ��� �Ͼݡ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        15,
        "\x07  OS � ���� ���� U ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        17,
        "\x07  ��̸ �ݿ�٦ �׸�� R ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "\x07  Ҳ��߰��� ������ ESC ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "\x07  ���߭��� ����޳ ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ESC = Ҳ��߰��  U = ����  R = ��̸  ENTER = ����޳",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPUpgradePageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "SeasideOS ��ı��� � �� � گ�� ��� �ݽİ� � ���ڶ �� �ɳ �޽�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        9,
        "Ӽ�ʤ Ӽ SeasideOS � �ݽİ� �� �ݼ�� �� ���� ��ı��� ��۸��� �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        10,
        "���̸ � ����� �� �� �޷Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "���̸ �ɳ � ��� �ݾ�� �� �ޯ�� ��� �Ͼݡ",
        TEXT_STYLE_HIGHLIGHT,
        TEXT_ID_STATIC
    },
    {
        8,
        15,
        "\x07  UP ��� DOWN � ���� OS � �ݽİ� � ���� �޷Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        17,
        "\x07  U � ���� ���� �� �ݽİ� � ���߸�ڰ�� �޷Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "\x07  ESC � ���� ��׼� �ݽİ� �� �ޯ�� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "\x07  F3 � ���� SeasideOS � �ݽİ� ���� ���خ� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "U = ���߸�ڰ��  ESC = ���߸�ڰ�� �Ų  F3 = ���خ�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPComputerPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "�ݽİ� ��� ���߭��� ��ٲ� �ݺ� �� �Ķ� ���� ��ϼ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
        "\x07  UP Ӽ�� DOWN ��� ��� ÷�� ���߭��� ��ٲ� ���� �� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        11,
        "   ·�� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "\x07  ���߭��� ��ٲ� �ݺ����� ϴ� �߰��� ���� �ޱ�� ESC ���",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        14,
        "   ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFlushPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        10,
        6,
        "����� ������ ����� �ް��� �ި���ޮ�� ο�� ��� ֳ� �òϽ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        8,
        "���� ������ �޶ݶ� ��� �ޱ��� ��Ͻ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        9,
        "��خ��ޤ ���߭��� ���޳�� ����޳ ��Ͻ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "������ ����� �� �Ͻ",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPQuitPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        10,
        6,
        "SeasideOS � �ݾ��� �ݽİ� ��Ͼ��޼�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        8,
        "��ײ�� A: �� �ۯ�߰ �ި��� CD ��ײ�޶�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        9,
        "����� CD-ROM � ���޼� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        11,
        "���߭��� ����޳ ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "��� ��޻�...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDisplayPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "�ݽİ� ��� �ި���ڲ� ��ٲ� �ݺ� �� �Ķ� ���� ��ϼ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
         "\x07  UP Ӽ�� DOWN ��� ��� ÷�� �ި���ڲ� ��ٲ� ���� �� ��޻��",
         TEXT_STYLE_NORMAL,
         TEXT_ID_STATIC
    },
    {
        8,
        11,
        "   ·�� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "\x07  �ި���ڲ� ��ٲ� �ݺ����� ϴ� �߰��� ������ ESC ���",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        14,
        "   ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPSuccessPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        10,
        6,
        "SeasideOS � ��������� �ݽİ�� ���� �ϼ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        8,
        "��ײ�� A: �� �ۯ�߰ �ި��� CD ��ײ�޶�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        9,
        "����� CD-ROM � ���޼� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        10,
        11,
        "���߭��� ����޳ ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = ���߭��� ����޳",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPBootPageEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "��ı���� �ް�۰�ަ ���߭��� ʰ���ި���ޮ�� �ݽİ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        9,
        "�޷Ͼ��޼�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        13,
        "��ײ�� A: � ̫�ϯ� ��� �ۯ�߰ �ި��� ��ä",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        14,
        "ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }

};

static MUI_ENTRY jaJPSelectPartitionEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "��� ؽ�� �ݻ޲�� �߰è���� �ݷ �߰è���� ÷�� мֳ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        9,
        "�ި�� ��߰�� �����޽�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        11,
        "\x07  UP Ӽ�� DOWN ��� ��� ؽ� ���ذ� ���� �� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "\x07  ������� �߰è���� SeasideOS � �ݽİ� ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        15,
        "\x07  P � ���� ��ײ�ذ �߰è��� � ���� �Ͻ�",
//        "\x07  ��׼� �߰è��� � ���� ���� C ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        17,
        "\x07  E � ���� ����� �߰è��� � ���� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        19,
        "\x07  L � ���� ��� �߰è��� � ���� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "\x07  ���� �߰è��ݦ ���ޮ ���� D ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "��� ��޻�...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPChangeSystemPartition[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "���� �ި�� � �� ��� � �߿�� � ��ݻ޲ � ����",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "�߰è��� � SeasideOS �� ��߰� ��� �Ų ���� �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        16,
        "¶�� �Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        18,
        "SeasideOS � �޼�� ���� ��� �� �ʤ ��ı��� ��۸��� �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        19,
        "��ݻ޲ � ���� �߰è��� � ��׼� �� � ��Ų� ��Ͼݡ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        21,
        "��׼� ���� �߰è��� � ��� �:",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        25,
        "\x07  �� ���� � ����� �� ENTER � ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        27,
        "\x07  ���� �߰è��� � ���޳ �� �ݺ� �� �פ ESC � ���",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        28,
        "   �߰è��� ���� ؽ� � ���ؤ ��׼� ���� �߰è��� �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        29,
        "   ���� �ٶ ���� �� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        32,
        "Ӽ ��� ���� �߰è��� � ���ݽ� ζ� OS �� ���ޤ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        33,
        "SeasideOS �ݽİ� � �� � ��׼� ���� �߰è��� �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        34,
        "����ò �ٶ� ���� �߰è��� � �� � ��޽ ��ֳ �� ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        35,
        "�� �� ��Ͼݡ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPConfirmDeleteSystemPartitionEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "���� �߰è��� � ���ޮ �� ����� ϼ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        10,
        "���� �߰è��� �� ����� ��۸��Ѥ ʰ�޳�� ��ò ��۸��Ѥ SeasideOS",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        11,
        "��� � OS  Ԥʰ�޳�� ������ �� ò��� �� ζ� ��۸��� � ��� ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        12,
        "��۸��� � ̸� �� �� ��Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        14,
        "��ֳ� ��۸��� �� Ų � ���� �� �� ���ޮ �� � ��ķ ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        15,
        "���ޮ �� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        16,
        "�߰è��� � ���ޮ �� ķ� SeasideOS ��ı��� �� ���خ� ����ޤ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        17,
        "ʰ���ި�� �� �� ���߭�� � ��޳ �޷Ų �� ��Ͼݡ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        20,
        "\x07  ENTER � ���� ���� �߰è��� � ���ޮ �Ͻ� ���� � �Ҥ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "   ���� ӳ���� ����Ͻ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        24,
        "\x07  ESC � ���� ϴ � �߰�� � ����Ͻ� �߰è��� �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        25,
        "   ���ޮ ��Ͼݡ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER=�ޯ��  ESC=��ݾ�",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFormatPartitionEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "�߰è���� ̫�ϯ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        10,
        "��ı���� �߰è��ݦ ̫�ϯ� �Ͻ� �ޯ�� ���� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_FORMAT_PROMPT
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPInstallDirectoryEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "��ı���� SeasideOS � ̧�٦ ���� ��� �߰è��ݼޮ�� �ݽİ� �Ͻ� SeasideOS �",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        9,
        "�ݽİٽ� �ިڸ�ئ ��ò �� ��޻�:",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        14,
        "����� �ިڸ�ئ �ݺ����ʤ BACKSPACE ���� Ӽަ ���ޮ �� ��Ƥ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        15,
        "SeasideOS � �ݽİ� �� �ިڸ�ئ ƭ�خ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        6,
        16,
        "�� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPFileCopyEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        0,
        12,
        "SeasideOS ��ı��߶� SeasideOS �ݽİ� ̫���� ̧�٦",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        13,
        "��߰ �� ���� ���׸ ��� ��޻��",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        0,
        14,
        "��خ����� ���� ��� �ޱ��� ��Ͻ�",
        TEXT_STYLE_NORMAL | TEXT_ALIGN_CENTER,
        TEXT_ID_STATIC
    },
    {
        50,
        0,
        "\xB3 ��� ��޻�...    ",
        TEXT_TYPE_STATUS,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPBootLoaderEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "��ı���� �ް� ۰�ަ �ݽİ� �Ͻ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        12,
        "ʰ���ި��� �ް�۰�ް� �ݽİ� �Ͻ (MBR � VBR).",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "ʰ���ި��� �ް�۰�ް� �ݽİ� �Ͻ (VBR ��).",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        14,
        "�ް�۰�ަ �ۯ�߰ �ި��� �ݽİ� �١",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        15,
        "�ް�۰��� �ݽİ٦ ����� �١",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPKeyboardSettingsEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "�ݽİ� ��� ���ް��� ��ٲ� �ݺ� �� �Ķ� ���� ��ϼ��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
        "\x07  UP Ӽ�� DOWN ��� ��� ÷�� ���ް��� ��ٲ� ���� �� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        11,
        "   ·�� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "\x07  ���ް��� ��ٲ� �ݺ� ���� ϴ� �߰��� ������ ESC���",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        14,
        "   ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPLayoutSettingsEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "�ò� ڲ���ļ� �ݽİ� ��� ڲ��Ħ ���� �� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        10,
        "\x07  UP Ӽ�� DOWN ��� ��� ÷�� ���ް�� ڲ��Ħ ���� �ä",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        11,
        "    ·�� ENTER ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        13,
        "\x07  ���ް�� ڲ��Ħ �ݺ� ���� ϴ� �߰��� ������ ESC ���",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        14,
        "   ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY jaJPPrepareCopyEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "��ı���� SeasideOS �̧�٦ ���߭��� ��߰ �� �ޭ��ަ �� �Ͻ� ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "��߰ �� ̧���ؽĦ ���� ���...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    },

};

static MUI_ENTRY jaJPSelectFSEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        17,
        "��� ؽĶ� ̧�� ���Ѧ ���� �� ��޻��",
        0
    },
    {
        8,
        19,
        "\x07  UP Ӽ�� DOWN ��� ��� ̧�� ���Ѧ ���� �� ��޻��",
        0
    },
    {
        8,
        21,
        "\x07  �߰è��ݦ ̫�ϯ� ���� ENTER ��� ��� ��޻��",
        0
    },
    {
        8,
        23,
        "\x07  ���� �߰è��ݦ ���� �� �ޱ�� ESC ��� ��� ��޻��",
        0
    },
    {
        0,
        0,
        "ENTER = �ޯ��   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPDeletePartitionEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "�� �߰è��ݦ ���ޮ �� �Ķ� ���� ��ϼ�",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        18,
        "\x07  �� �߰è��ݦ ���ޮ ���� L ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        11,
        19,
        "����(WARNING): �� �߰è��ݼޮ�� ����� �ް�� �����Ͻ!",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        8,
        21,
        "\x07  ��ݾ� ���� ESC ��� ��� ��޻��",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "L = �߰ü�� ���ޮ   ESC = ��ݾ�   F3 = ����",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    }
};

static MUI_ENTRY jaJPRegistryEntries[] =
{
    {
        4,
        3,
        " SeasideOS " KERNEL_VERSION_STR " ��ı��� ",
        TEXT_STYLE_UNDERLINE,
        TEXT_ID_STATIC
    },
    {
        6,
        8,
        "��ı���� ����� ����� ���� �òϽ� ",
        TEXT_STYLE_NORMAL,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        "ڼ޽�� ʲ�ަ ���� ���...",
        TEXT_TYPE_STATUS | TEXT_PADDING_BIG,
        TEXT_ID_STATIC
    },
    {
        0,
        0,
        NULL,
        0
    },

};

MUI_ERROR jaJPErrorEntries[] =
{
    {
        // NOT_AN_ERROR
        "����\n"
    },
    {
        // ERROR_NOT_INSTALLED
        "SeasideOS � ���߭��� �ݾ��� �ݽİ�\n"
        "��Ͼݡ ��ı��ߦ ���� �� �ޱ�� SeasideOS � �ݽİ� ���� ��ı��ߦ\n"
        "ӳ���� �ޯ�� �� ��ֳ�� ��Ͻ�\n"
        "\n"
        "  \x07  ��ı��ߦ �ޯ�� ���� ENTER ��� ��� ��޻��\n"
        "  \x07  ��ı��ߦ ���� ���� F3 ��� ��� ��޻��",
        "F3 = ����  ENTER = �ޯ��"
    },
    {
        // ERROR_NO_BUILD_PATH
        "SeasideOS �ݽİ� �ިڸ�� � �ݽİ� �� � �߽ � ���� �� �� ���߲ �ϼ�!\n"
        "ENTER = ����޳"
    },
    {
        // ERROR_SOURCE_PATH
        "�ݽİ� �� � ̸� �߰è��� � ���ޮ �޷Ͼ�!\n"
        "ENTER = ����޳"
    },
    {
        // ERROR_SOURCE_DIR
        "�ݽİ� �� Ų�� � SeasideOS � �ݽİ� �޷Ͼ�!\n"
        "ENTER = ����޳"
    },
    {
        // ERROR_NO_HDD
        "��ı���� ʰ���ި��� �ݼ�� �޷Ͼ� �޼��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_NO_SOURCE_DRIVE
        "��ı���� ��� ��ײ�ަ �ݼ�� �޷Ͼ� �޼��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_LOAD_TXTSETUPSIF
        "��ı���� ̧�� TXTSETUP.SIF � �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_CORRUPT_TXTSETUPSIF
        "��ı����  TXTSETUP.SIF �� ʿ� �ò� �Ħ �ݼ�� �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_SIGNATURE_TXTSETUPSIF,
        "��ı���� TXTSETUP.SIF � Ѻ�� ��Ҳ� �ݼ�� �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_DRIVE_INFORMATION
        "��ı���� ���� ��ײ��� �ޮ�γ� ���� �޷Ͼ� �޼��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_WRITE_BOOT,
        "��ı���� ���� �߰è��� �ޮ��� %S �ްĺ���� �ݽİ�� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_LOAD_COMPUTER,
        "��ı���� ���߭��� ��ٲ ؽ�� �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_LOAD_DISPLAY,
        "��ı���� �ި���ڲ� ��ò ؽ�� �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_LOAD_KEYBOARD,
        "��ı���� ���ް��� ��ٲ ؽ�� �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_LOAD_KBLAYOUT,
        "��ı���� ���ް�� ڲ��� ؽ�� �к�� ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_WARN_PARTITION,
          "��ı���� ��Ÿ�� 1�� ʰ���ި���� ÷��� �¶�Ų �޶ݾ�� Ų\n"
          "�߰è��� ð��٦ ̸� �Ħ �ݼ�� �ϼ�!\n"
          "\n"
          "�߰è��ݦ ���� ��� ���ޮ �ä �� �߰è��� ð��٦ ʶ� �޷Ͻ\n"
          "\n"
          "  \x07  ��ı��ߦ ���� ���� F3 ��� ��� ��޻��\n"
          "  \x07  �ޯ�� ���� ENTER ��� ��� ��޻��",
          "F3 = ����  ENTER = �ޯ��"
    },
    {
        // ERROR_NEW_PARTITION,
        "��׼� �߰è��ݦ ���� �ݻ޲��\n"
        "�߰è���� Ų��� ���� �ٺ�� �޷Ͼ�!\n"
        "\n"
        "  * �ޯ�� ���� �ƶ ��� ��� ��޻��",
        NULL
    },
    {
        // ERROR_DELETE_SPACE,
        "���ݶ� � �ި�� ��߰� � ���ޮ �ٺ�� �޷Ͼ�!\n"
        "\n"
        "  * �ޯ�� ���� �ƶ ��� ��� ��޻��",
        NULL
    },
    {
        // ERROR_INSTALL_BOOTCODE,
        "��ı���� ���� �߰è��� �ޮ��� %S �ް� ں��� � �ݽİ�� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_NO_FLOPPY,
        "��ײ�� A: � �ި���� ��Ͼݡ",
        "ENTER = �ޯ��"
    },
    {
        // ERROR_UPDATE_KBSETTINGS,
        "��ı���� ���ް�� ڲ��� � ��ò� ����� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_UPDATE_DISPLAY_SETTINGS,
        "��ı���� �ި���ڲ� ڼ޽�� ��ò� ����� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_IMPORT_HIVE,
        "��ı���� ʲ�� ̧��� ���߰�� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_FIND_REGISTRY
        "��ı���� ڼ޽�� �ް� ̧��� �ݼ��� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_CREATE_HIVE,
        "��ı���� ڼ޽�� ʲ��� ����� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_INITIALIZE_REGISTRY,
        "��ı���� ڼ޽��� ����� ���߲ �ϼ��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_INVALID_CABINET_INF,
        "����ȯ�� Ѻ�� inf ̧�ٶ� ̸��� �Ͻ�\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_CABINET_MISSING,
        "����ȯĶ� �¶�Ͼݡ\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_CABINET_SCRIPT,
        "����ȯ�Ų� ��ı��� �����Ķ� �¶�Ͼݡ\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_COPY_QUEUE,
        "��ı���� ��߰ ̧�� ���� ������ ���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_CREATE_DIR,
        "��ı���� �ݽİ� �ިڸ�ئ ���� �޷Ͼ� �޼��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_TXTSETUP_SECTION,
        "��ı���� TXTSETUP.SIF Ų� '%S' ������ �ݻ��\n"
        "���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_CABINET_SECTION,
        "��ı���� ����ȯ�Ų� '%S' ������ �ݻ��\n"
        "���߲ �ϼ��\n",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_CREATE_INSTALL_DIR
        "��ı���� �ݽİ� �ިڸ�ئ ���� �޷Ͼ� �޼��",
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_WRITE_PTABLE,
        "��ı���� �߰è��� ð���� ����� ���߲ �ϼ��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_ADDING_CODEPAGE,
        "��ı���� ڼ޽���� �����߰��� ²�� ���߲ �ϼ��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_UPDATE_LOCALESETTINGS,
        "��ı���� ���� ۹�٦ ��ò �޷Ͼ� �޼��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_ADDING_KBLAYOUTS,
        "��ı���� ڼ޽���� ���ް�� ڲ���� ²�� ���߲ �ϼ��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_UPDATE_GEOID,
        "��ı���� geo id � ��ò �޷Ͼ� �޼��\n"
        "ENTER = ���߭��� ����޳"
    },
    {
        // ERROR_DIRECTORY_NAME,
        "̾� � �ިڸ�� Ҳ �޽�\n"
        "\n"
        "  * �ޯ�� �� �� �ƶ �� � ��� ��޻��"
    },
    {
        // ERROR_INSUFFICIENT_PARTITION_SIZE,
        "���� �� �߰è��� ʤ SeasideOS � �ݽİ� �ʤ ��� ��� Ͻ�\n"
        "�ݽİ� �� � �߰è��� � ��Ÿ�� %lu MB ��ֳ �޽�\n"
        "\n"
        "  * �ޯ�� �� �� �ƶ �� � ��� ��޻��",
        NULL
    },
    {
        // ERROR_PARTITION_TABLE_FULL,
        "�߰è��� ð��� �� ���߲ ���ޤ �� �ި�� �\n"
        "��׼� ��ײ�ذ ��� ����� �߰è��� � ���� �޷Ͼݡ\n"
        "\n"
        "  * �ޯ�� �� �� �ƶ �� � ��� ��޻��"
    },
    {
        // ERROR_ONLY_ONE_EXTENDED,
        "��� � �ި�� � �����ޮ� � ����� �߰è��� � ���� �޷Ͼݡ\n"
        "\n"
        "  * �ޯ�� �� �� �ƶ �� � ��� ��޻��"
    },
    {
        // ERROR_FORMATTING_PARTITION,
        "��ı��� � �� �߰è��� � ̫�ϯ� �޷Ͼ�:\n"
        " %S\n"
        "\n"
        "ENTER = ���߭�� � ����޳"
    },
    {
        NULL,
        NULL
    }
};

MUI_PAGE jaJPPages[] =
{
    {
        SETUP_INIT_PAGE,
        jaJPSetupInitPageEntries
    },
    {
        LANGUAGE_PAGE,
        jaJPLanguagePageEntries
    },
    {
        WELCOME_PAGE,
        jaJPWelcomePageEntries
    },
    {
        INSTALL_INTRO_PAGE,
        jaJPIntroPageEntries
    },
    {
        LICENSE_PAGE,
        jaJPLicensePageEntries
    },
    {
        DEVICE_SETTINGS_PAGE,
        jaJPDevicePageEntries
    },
    {
        REPAIR_INTRO_PAGE,
        jaJPRepairPageEntries
    },
    {
        UPGRADE_REPAIR_PAGE,
        jaJPUpgradePageEntries
    },
    {
        COMPUTER_SETTINGS_PAGE,
        jaJPComputerPageEntries
    },
    {
        DISPLAY_SETTINGS_PAGE,
        jaJPDisplayPageEntries
    },
    {
        FLUSH_PAGE,
        jaJPFlushPageEntries
    },
    {
        SELECT_PARTITION_PAGE,
        jaJPSelectPartitionEntries
    },
    {
        CHANGE_SYSTEM_PARTITION,
        jaJPChangeSystemPartition
    },
    {
        CONFIRM_DELETE_SYSTEM_PARTITION_PAGE,
        jaJPConfirmDeleteSystemPartitionEntries
    },
    {
        SELECT_FILE_SYSTEM_PAGE,
        jaJPSelectFSEntries
    },
    {
        FORMAT_PARTITION_PAGE,
        jaJPFormatPartitionEntries
    },
    {
        DELETE_PARTITION_PAGE,
        jaJPDeletePartitionEntries
    },
    {
        INSTALL_DIRECTORY_PAGE,
        jaJPInstallDirectoryEntries
    },
    {
        PREPARE_COPY_PAGE,
        jaJPPrepareCopyEntries
    },
    {
        FILE_COPY_PAGE,
        jaJPFileCopyEntries
    },
    {
        KEYBOARD_SETTINGS_PAGE,
        jaJPKeyboardSettingsEntries
    },
    {
        BOOT_LOADER_PAGE,
        jaJPBootLoaderEntries
    },
    {
        LAYOUT_SETTINGS_PAGE,
        jaJPLayoutSettingsEntries
    },
    {
        QUIT_PAGE,
        jaJPQuitPageEntries
    },
    {
        SUCCESS_PAGE,
        jaJPSuccessPageEntries
    },
    {
        BOOT_LOADER_FLOPPY_PAGE,
        jaJPBootPageEntries
    },
    {
        REGISTRY_PAGE,
        jaJPRegistryEntries
    },
    {
        -1,
        NULL
    }
};

MUI_STRING jaJPStrings[] =
{
    {STRING_PLEASEWAIT,
     "   ��� ��޻�..."},
    {STRING_INSTALLCREATEPARTITION,
     "   ENTER = Install   P = Create Primary   E = Create Extended   F3 = Quit"},
//     "   ENTER = �ݽİ�   C = �߰è��� ����   F3 = ����"},
    {STRING_INSTALLCREATELOGICAL,
     "   ENTER = Install   L = Create Logical Partition   F3 = Quit"},
    {STRING_INSTALLDELETEPARTITION,
     "   ENTER = �ݽİ�   D = �߰è��� ���ޮ   F3 = ����"},
    {STRING_DELETEPARTITION,
     "   D = Delete Partition   F3 = Quit"},
    {STRING_PARTITIONSIZE,
     "��׼� �߰è���� ����:"},
    {STRING_CHOOSENEWPARTITION,
     "��ײ�ذ �߰è��� � ���� � ���� ϼ�"},
//     "��׼� �߰è��ݦ ·�� ������ �Ķ� ���� ��ϼ�:"},
    {STRING_CHOOSE_NEW_EXTENDED_PARTITION,
     "����� �߰è��� � ���� � ���� ϼ�"},
    {STRING_CHOOSE_NEW_LOGICAL_PARTITION,
     "��� �߰è��� � ���� � ���� ϼ�"},
    {STRING_HDDSIZE,
    "��׼� �߰è���� ���ަ Ҷ��޲� �ݲ�� ƭ�خ� �ø�޻��"},
    {STRING_CREATEPARTITION,
     "   ENTER = �߰è��� ����   ESC = ��ݾ�   F3 = ����"},
    {STRING_PARTFORMAT,
    "�� �߰è���� ·�� üޭ��� ̫�ϯ� ��Ͻ�"},
    {STRING_NONFORMATTEDPART,
    "SeasideOS� �ݷ ��� �̫�ϯ�� �߰è���� �ݽİٽ� �Ķ� ���� ��ϼ��"},
    {STRING_NONFORMATTEDSYSTEMPART,
    "���� �߰è��� � ��� ̫�ϯ� ��� �Ͼݡ"},
    {STRING_NONFORMATTEDOTHERPART,
    "��׼� �߰è��� � ��� ̫�ϯ� ��� �Ͼݡ"},
    {STRING_INSTALLONPART,
    "��ı���� SeasideOS� �߰è��� �ޮ�� �ݽİټϽ�"},
    {STRING_CHECKINGPART,
    "��ı���� ���� ��� �߰è��ݦ �ݻ �òϽ�"},
    {STRING_CONTINUE,
    "ENTER = �ޯ��"},
    {STRING_QUITCONTINUE,
    "F3 = ����  ENTER = �ޯ��"},
    {STRING_REBOOTCOMPUTER,
    "ENTER = ���߭��� ����޳"},
    {STRING_DELETING,
     "   ̧�� � ���ޮ: %S"},
    {STRING_MOVING,
     "   ̧�� � ��޳: %S ��: %S"},
    {STRING_RENAMING,
     "   �ϴ � �ݺ�: %S to: %S"},
    {STRING_COPYING,
     "   ��߰ ���� ̧��: %S"},
    {STRING_SETUPCOPYINGFILES,
     "��ı���� ̧�٦ ��߰ �� �Ͻ..."},
    {STRING_REGHIVEUPDATE,
    "   ڼ޽�� ʲ��� ���� ���..."},
    {STRING_IMPORTFILE,
    "   %S � ���߰� ���..."},
    {STRING_DISPLAYSETTINGSUPDATE,
    "   �ި���ڲ ڼ޽�� ��ò� ���� ���..."},
    {STRING_LOCALESETTINGSUPDATE,
    "   ��� ��ò� ���� ���..."},
    {STRING_KEYBOARDSETTINGSUPDATE,
    "   ���ް�� ڲ���� ��ò� ���� ���..."},
    {STRING_CODEPAGEINFOUPDATE,
    "   ���� �߰�� � �ޮ�γ� ڼ޽��� ²� ���..."},
    {STRING_DONE,
    "   ��خ�..."},
    {STRING_REBOOTCOMPUTER2,
    "   ENTER = ���߭��� ����޳"},
    {STRING_REBOOTPROGRESSBAR,
    " %li �ޮ��� � ����޳ ��Ͻ... "},
    {STRING_CONSOLEFAIL1,
    "�ݿ�٦ ����� �޷Ͼ�\r\n\r\n"},
    {STRING_CONSOLEFAIL2,
    "�����÷� ��ݲ� ļ� USB ���ް�� � ¶�� �ٺĶ� �ݶ޴�� Ͻ\r\n"},
    {STRING_CONSOLEFAIL3,
    "USB ���ް�� � ��� �ݾ��� ��߰� ��� �Ͼ�\r\n"},
    {STRING_FORMATTINGDISK,
    "��ı���� �ި��� ̫�ϯ� �òϽ"},
    {STRING_CHECKINGDISK,
    "��ı���� �ި��� �ݻ �òϽ�"},
    {STRING_FORMATDISK1,
    " �߰è��ݦ %S ̧�� ���� ��̫�ϯ� (���� ̫�ϯ�) "},
    {STRING_FORMATDISK2,
    " �߰è��ݦ %S ̧�� ���� ��̫�ϯ� "},
    {STRING_KEEPFORMAT,
    " ��ݻ޲� ̧�� ����� �� (�ݺ� �Ų) "},
    {STRING_HDINFOPARTCREATE_1,
    "%I64u %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) on %wZ [%s]."},
    {STRING_HDINFOPARTCREATE_2,
    "%I64u %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) [%s]."},
    {STRING_HDDINFOUNK2,
    "   %c%c  ��ٲ 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTDELETE_1,
    "on %I64u %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) on %wZ [%s]."},
    {STRING_HDINFOPARTDELETE_2,
    "on %I64u %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) [%s]."},
    {STRING_HDINFOPARTZEROED_1,
    "ʰ���ި�� %lu (%I64u %s), �߰�=%hu, �޽=%hu, Id=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK4,
    "%c%c  ��ٲ 0x%02X    %I64u %s"},
    {STRING_HDINFOPARTEXISTS_1,
    "on ʰ���ި�� %lu (%I64u %s), �߰�=%hu, �޽=%hu, Id=%hu (%wZ) [%s]."},
    {STRING_HDDINFOUNK5,
    "%c%c %c %s��ٲ %-3u%s                      %6lu %s"},
    {STRING_HDINFOPARTSELECT_1,
    "%6lu %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) on %wZ [%s]"},
    {STRING_HDINFOPARTSELECT_2,
    "%6lu %s  ʰ���ި�� %lu  (�߰�=%hu, �޽=%hu, Id=%hu) [%s]"},
    {STRING_NEWPARTITION,
    "��ı���� ��׼� �߰è��ݦ ·�� �����ϼ�:"},
    {STRING_UNPSPACE,
    "    %s���ݶ�� ��߰�%s            %6lu %s"},
    {STRING_MAXSIZE,
    "MB (���޲. %lu MB)"},
    {STRING_EXTENDED_PARTITION,
    "����� �߰è���"},
    {STRING_UNFORMATTED,
    "�ݷ (�̫�ϯ�)"},
    {STRING_FORMATUNUSED,
    "мֳ"},
    {STRING_FORMATUNKNOWN,
    "�Ҳ"},
    {STRING_KB,
    "KB"},
    {STRING_MB,
    "MB"},
    {STRING_GB,
    "GB"},
    {STRING_ADDKBLAYOUTS,
    "���ް�� ڲ���� ²� ���"},
    {0, 0}
};
