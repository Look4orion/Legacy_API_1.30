#ifndef DAYZ_1_29
modded class ItemBase
{
	float m_ItemModelLength;
	float m_ItemAttachOffset;

	override void InitItemVariables()
	{
		super.InitItemVariables();
		m_ItemModelLength = GetItemModelLength();
		m_ItemAttachOffset = GetItemAttachOffset();
	}
}
#endif
