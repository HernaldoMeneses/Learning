USE [SQL_DB_1]
GO

/****** Object:  Table [dbo].[Cursos]    Script Date: 17/10/2023 06:45:46 ******/
IF  EXISTS (SELECT * FROM sys.objects WHERE object_id = OBJECT_ID(N'[dbo].[Cursos]') AND type in (N'U'))
DROP TABLE [dbo].[Cursos]
GO

/****** Object:  Table [dbo].[Cursos]    Script Date: 17/10/2023 06:45:46 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[Cursos](
	[id_curso] [int] NOT NULL,
	[nome_curso] [varchar](200) NOT NULL,
	[data_cadastro] [date] NOT NULL,
	[login_cadastro] [varchar](15) NOT NULL,
	[data_alteracao] [date](15) NULL,
	[login_alteracao] [varchar](15) NULL,
PRIMARY KEY CLUSTERED 
(
	[id_curso] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO


