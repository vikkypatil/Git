#include "ProgreeeBar.h"
#include <iostream>


ProgreeeBar::ProgreeeBar()
{
}


ProgreeeBar::~ProgreeeBar()
{
}
ProgreeeBar::ProgreeeBar(int start, int end) 
{
	this->m_Start = start;
	this->m_end = end;
}
void ProgreeeBar::SetProgress(int progress) 
{
	if (progress > m_Progress)
	{
		m_Progress = progress;
		system("CLS");
		
		for (int i = 0; i < m_Progress; i++)
		{
			if (m_Vertical)
			{
				std::cout << m_BlankChar;
				std::cout << std::endl;
			}
			else
			{
				std::cout << m_DispChar;
			}
		}

		for (int i = m_Progress + 1; i < m_end; i++)
		{

			if (m_Vertical)
			{
				std::cout << m_DispChar;
				std::cout << std::endl;
			}
			else
			{
				std::cout << m_BlankChar;
			}
			
		}
	}
}

void ProgreeeBar::Increment() 
{
	if(m_Progress< m_end)
		SetProgress(m_Progress+1);
}