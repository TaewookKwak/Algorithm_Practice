#include "CArr.h"
#include<assert.h>
CArr::CArr()
	: m_pInt(nullptr)
	, m_iCount(0)
	, m_iMaxCount(0)
{
	m_pInt = new int[2]; //int자료형 2개만큼 할당하겠다. (malloc 대신에 쓰이는 것)
}

CArr::~CArr()
{
	delete[] m_pInt; //[] 붙인 이유는 int[2] 배열 형태를 받았기 때문에
}

void CArr::push_back(int _iData)
{
	if (m_iMaxCount <= m_iCount)
	{
		reallocate(m_iMaxCount * 2);
	}
	m_pInt[m_iCount++] = _iData;
}

void CArr::reallocate(int _iDataCount)
{
	//현재 최대 수용량 보다 더 작은 수치로 확장하려는 경우
	if (m_iMaxCount >= _iDataCount)
	{
		assert(nullptr);
	}
	// 1. 리사이즈 시킬 개수만큼 동적 할당 한다.
	int* pNew = new int[_iDataCount];

	// 2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사시킨다.
	for (int i = 0; i < m_iCount; ++i)
	{
		pNew[i] = m_pInt[i];
	}
	// 3. 기존 공간은 메모리 해제
	delete[] m_pInt;

	// 4. 배열이 새로 할당한 공간을 가르킨다.
	m_pInt = pNew;

	// 5. maxcount 변경점 적용
	m_iMaxCount = _iDataCount;


}

int& CArr::operator[](int idx)
{
	return m_pInt[idx];
}
