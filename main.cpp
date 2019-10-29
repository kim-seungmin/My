#include<afxwin.h>
#include<atlimage.h>
class CMainFrame : public CFrameWnd {
public:
	CMainFrame() {
		Create(NULL, L"Hi !");
	}
	DECLARE_MESSAGE_MAP()
	afx_msg void OnPaint();
};
class CMyApp : public CWinApp {
	BOOL InitInstance() {
		CMainFrame* Frm = new CMainFrame();
		m_pMainWnd = Frm;
		Frm->ShowWindow(1);
		return TRUE;
	}
};
CMyApp theApp; BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
ON_WM_PAINT()
END_MESSAGE_MAP()


void CMainFrame::OnPaint()
{
	CImage img;
	CPaintDC dc(this); // device context for painting
	img.Load(L"parrot.png");
	img.Draw(dc, 0, 0);
	
//	CBrush b;
//	b.CreateSolidBrush(RGB(0, 255, 0));
//	dc.SelectObject(&b);
//	dc.Rectangle(30, 30, 200, 200);				   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
					   // 그리기 메시지에 대해서는 CFrameWnd::OnPaint()을(를) 호출하지 마십시오.
}