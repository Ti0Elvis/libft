# ================================ COLORS ================================== #
RESET		= \033[0m
RED			= \033[31m
GREEN		= \033[32m
YELLOW		= \033[33m
BLUE		= \033[34m
MAGENTA		= \033[35m
CYAN		= \033[36m
WHITE		= \033[37m
BOLD		= \033[1m
BLACK 		= \033[30m
ITALIC		= \033[3m

# =============================== PROJECT =================================== #
NAME		= libft.a
COMPILER	= gcc
FLAGS		= -Wall -Wextra -Werror
OBJS_DIR	= objs

# ================================ FILES ==================================== #
# C_FILES		=

OBJS		= $(patsubst %.c,$(OBJS_DIR)/%.o,$(C_FILES))

# =============================== TARGETS =================================== #
all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(CYAN)$(BOLD)📚 Creating library $(NAME)...$(RESET)\n"
	@ar rcs $(NAME) $(OBJS)
	@printf "$(GREEN)$(BOLD)✅ $(NAME) successfully compiled!$(RESET)\n\n"
	@printf "$(MAGENTA)$(BOLD)\n"
	@printf "        ██╗     ██╗██████╗ ███████╗████████╗\n"
	@printf "        ██║     ██║██╔══██╗██╔════╝╚══██╔══╝\n"
	@printf "        ██║     ██║██████╔╝█████╗     ██║   \n"
	@printf "        ██║     ██║██╔══██╗██╔══╝     ██║   \n"
	@printf "        ███████╗██║██████╔╝██║        ██║   \n"
	@printf "        ╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝   \n"
	@printf "$(YELLOW)    📖 C library is ready to use! 📖$(RESET)\n\n"

$(OBJS_DIR)/%.o: %.c | $(OBJS_DIR)
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)🔨 Compiling $<...$(RESET)\n"
	@$(COMPILER) $(FLAGS) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@printf "$(BLUE)📁 Creating objects directory...$(RESET)\n"

clean:
	@printf "$(RED)🧹 Cleaning object files...$(RESET)\n"
	@rm -rf $(OBJS_DIR)
	@printf "$(GREEN)✨ Clean completed!$(RESET)\n"

fclean: clean
	@printf "$(RED)🗑️  Removing $(NAME)...$(RESET)\n"
	@rm -f $(NAME)
	@printf "$(GREEN)✨ Full clean completed!$(RESET)\n"

re: fclean all

help:
	@printf "$(CYAN)$(BOLD)📖 Available targets:$(RESET)\n"
	@printf "  $(GREEN)all$(RESET)     - Build the library\n"
	@printf "  $(GREEN)clean$(RESET)   - Remove object files\n"
	@printf "  $(GREEN)fclean$(RESET)  - Remove object files and library\n"
	@printf "  $(GREEN)re$(RESET)      - Rebuild everything from scratch\n"
	@printf "  $(GREEN)help$(RESET)    - Show this help message\n"

.PHONY: all clean fclean re help
