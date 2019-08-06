
// MFCApplication2Dlg.h: 헤더 파일
//

#pragma once

#define X_COUNT			30
#define Y_COUNT			30
#define RECT_INTERVAL	20

// CMFCApplication2Dlg 대화 상자
class CMFCApplication2Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCApplication2Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	COLORREF m_dot_color[Y_COUNT][X_COUNT];
	CPen m_grid_pen;
	COLORREF m_left_color, m_right_color;
	CRect m_left_rect, m_right_rect;
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedLeftColorBtn();
	afx_msg void OnBnClickedRightColorBtn();
};
