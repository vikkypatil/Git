#pragma once
#include <windows.h>

class ProgreeeBar
{
	int m_Start{};
	int m_end{ 100 };
	char m_Progress{};
	char m_DispChar{ '#' };
	char m_BlankChar{ ' ' };
	int m_Vertical{ 1 };
public:
	ProgreeeBar();
	ProgreeeBar(int start, int end);
	~ProgreeeBar();
	void SetProgress(int progress);
	int IntGetProgress() {
		return m_Progress;
	}
	void Increment();
};

